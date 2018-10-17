#include <stdio.h>
#include <stdio.h>
#include <setjmp.h>
#include "f0700.h"
#include "f0700Legacy.h"
#pragma region Test helper defines
#define TRY do{ jmp_buf ex_buf__; if( !setjmp(ex_buf__) ){
#define CATCH } else {
#define ETRY } }while(0)
#define THROW longjmp(ex_buf__, 1)
#pragma endregion 
#pragma region Test variable Setup
int p1[] = { 64, 128, 256 };
int p2[1408];
void 
popUp2()
{
	int tmp=0;
	for (int i = -4095; i < 4095; i += 6)
	{
		p2[tmp] = i;
		tmp++;
	}
}
int p3[] = { 2, 3, 4, 5, 6 };
int p4[116];
popUp4()
{
	for (int i = 0;i<115;i++)
	{
		p4[i] = 0;
	}
}
#pragma endregion 
#pragma region Test App-main

int
main(int argc, char** argv)
{
	popUp2();
	popUp4();
	TRY
	{
	   f0700(p1,p2,p3[3],p4);
	   THROW;
	   printf("I do not appear\n");
	}
	CATCH
	{
	   printf("Got Exception!\n");
			TRY
			{
				//Try legacy code instead
				f0700Legacy(p1, p2, p3[3], p4);
				THROW;
				printf("I do not appear\n");
			}
			CATCH
			{
				printf("Got Exception!\n");
			}
			ETRY;
	}
	ETRY;

	return 0;
}
#pragma endregion 
