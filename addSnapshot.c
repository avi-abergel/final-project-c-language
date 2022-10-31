#include "addSnapshot.h"

Snapshot* Shead;
Snapshot* Stail;


Snapshot* addSnapshot (Process* headprocess) //adding new anpshot struct to a linked list
{
	Snapshot* curr = (Snapshot*)malloc(sizeof(Snapshot));
	curr->headprocess = headprocess;
	time_t t;
	time(&t);
	struct tm* timeinfo;
	timeinfo = localtime(&t);
	sprintf(curr->time, "%d%d%d- %d:%d:%d",timeinfo->tm_year, timeinfo->tm_mon,timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
	
	 curr->next = NULL;
	curr->prev = NULL;
	if (Shead == NULL)
	{
		Shead = curr;
		Stail = curr;
	}
	else
	{
		curr->prev = Stail;
		Stail->next = curr;
		Stail = curr;
	}
	return curr;
}
