#include "addProcess.h"



int Pcounter = 1;

Process* Ptail = NULL;
Process* Phead=NULL;

void addProcess(Process prc) //adding new process struct to a linked list
{
	Process* curr = (Process*)malloc(sizeof(Process));
	curr->ProcessId = prc.ProcessId;
	strcpy(curr->ProcessName, prc.ProcessName);
	strcpy(curr->time, prc.time);
	curr->process_data = prc.process_data;
	curr->headDLL = prc.headDLL;
	curr->tailDLL = prc.tailDLL;
	strcpy(curr->time, prc.time);
	curr->next = NULL;;
	curr->prev = NULL;
	if (Phead == NULL)
	{
		Phead = curr;
		Ptail = curr;
		curr->position = Pcounter;
	}
	else
	{
		curr->prev = Ptail;
		Ptail->next = curr;
		Ptail = curr;
		Pcounter++;
		curr->position = Pcounter;
	}
}