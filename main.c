#include "OneSnapshot.h"
#pragma warning(disable:4996)


main()
{
	int userResponse;
	printf("Hello! please choose an option:\n1-take one snapshot\n2-take 20 snapshots\n3-start a long snapshot\n4-generate HTML report\n5-reset collection\n6-save in file\n7-load from file\n8-QUIT");
	scanf("%d", &userResponse);
	switch (userResponse)
	{
	default:printf("option doesnt exist. please choose one of the option 1-8");
		break;
	case 1:GetProcessesInfo();
		break;
	case 2:printf("2");
		break;
	case 3:printf("3");
		break;
	case 4:printf("4");
		break;
	case 5:printf("5");
		break;
	case 6:printf("6");
		break;
	case 7:printf("7");
		break;
	case 8:printf("8");
		break;
	}
	return 0;
}