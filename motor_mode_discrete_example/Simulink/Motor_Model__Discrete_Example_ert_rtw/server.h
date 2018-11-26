#include <time.h>
#include <string.h>
#define buffer_size 8192
void error(const char *msg);
int sendMessage(int socket_fd, const char* message);
void error(const char *msg);
int isExitCriterionMet(char* str);
struct timespec Sec2TimeSpec(double TimeSec);
void MySleepSec(double SleepTimeSeconds);
struct timespec Sec2TimeSpec(double TimeSec)
{
	struct timespec Timer;
	Timer.tv_sec = (long int)TimeSec;
	Timer.tv_nsec = (long int)((TimeSec-(double)Timer.tv_sec)*1000000000.0);
	return Timer;
}

void MySleepSec(double SleepTimeSeconds)
{
	struct timespec Timer;
	Timer = Sec2TimeSpec(SleepTimeSeconds);
	nanosleep(&Timer,NULL);
}

int isExitCriterionMet(char* str)
{
    int n = strlen(str);
    if(n >= 4)
    {
        if(str[0] == 'E' && str[1] == 'X' && str[2] == 'I' && str[3] == 'T')
        {
            return 1;
        } else
        {
            return 0;
        }
    } else
    {
        return 1; // Break anyway; TODO: Log error
    }
}

void error(const char *msg)
{
    perror(msg);
    exit(1);
}

int sendMessage(int socket_fd, const char* message)
{
    int n;

    n = write(socket_fd,message,strlen(message)); // Use send() instead?
    if (n < 0)
        error("ERROR writing to socket");

    return n;
}