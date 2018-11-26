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