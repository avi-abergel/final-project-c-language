#include "twentySnaps.h"

void twentySnaps()
{
	Snapshot* mainSnap = GetProcessesInfo();
	Process* mainPrcListIndex = mainSnap->headprocess;
		for (int i = 0; i < 19; i++)
		{
			Snapshot* secondarySnap = GetProcessInfo();
			Process* secPrcListIndex = secondarySnap->headprocess;
			while (secPrcListIndex != NULL)
			{
				if (secPrcListIndex->ProcessId == mainPrcListIndex->ProcessId)
				{
					if (secPrcListIndex->process_data.PageFaultCount != mainPrcListIndex->process_data.PageFaultCount)
					{
						mainPrcListIndex->process_data.PageFaultCount = mainPrcListIndex->process_data.PageFaultCount + secPrcListIndex->process_data.PageFaultCount;
					}
					if (secPrcListIndex->process_data.PagefileUsage != mainPrcListIndex->process_data.PagefileUsage)
					{
						mainPrcListIndex->process_data.PagefileUsage = mainPrcListIndex->process_data.PagefileUsage + secPrcListIndex->process_data.PagefileUsage;
					}
					if (secPrcListIndex->process_data.WorkingSetSize != mainPrcListIndex->process_data.WorkingSetSize)
					{
						mainPrcListIndex->process_data.WorkingSetSize = mainPrcListIndex->process_data.WorkingSetSize + secPrcListIndex->process_data.WorkingSetSize;
					}
					if (secPrcListIndex->process_data.QuotaPagedPoolUsage != mainPrcListIndex->process_data.QuotaPagedPoolUsage)
					{
						mainPrcListIndex->process_data.QuotaPagedPoolUsage = mainPrcListIndex->process_data.QuotaPagedPoolUsage + secPrcListIndex->process_data.QuotaPagedPoolUsage;
					}
					if (secPrcListIndex->process_data.QuotaPeakPagedPoolUsage != mainPrcListIndex->process_data.QuotaPagedPoolUsage)
					{
						mainPrcListIndex->process_data.QuotaPagedPoolUsage = mainPrcListIndex->process_data.QuotaPagedPoolUsage + secPrcListIndex->process_data.QuotaPagedPoolUsage;
					}
					mainPrcListIndex++;
					secPrcListIndex++;
				}
			}  
		
		}
}