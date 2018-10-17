#ifndef __f0700_h__
#define __f0700_h__
#pragma region Explaination
////////////////////////////////////////////////////////////////////////////
/**************************************************************************
 **_________________________!!!!EXPLAINATION!!!!_________________________**
 **                                                                      **
 ** 2. What strategy would you use to verify that your code is correct?  **
 **     unit testing using defined C style try catch and breakpoints     **
 **                                                                      **
 ** 3. Explain what the code is trying to accomplish intuitively         **
 **    The code seems 2 be dealing with encryption due 2 a1 precondtion  **
 **                                                                      **
 **                                                                      **
 *************************************************************************/
 /////////////////////////////////////////////////////////////////////////
#pragma endregion
#pragma region Functions
//standard C format
signed int
oddDecr(int res)
{
	if (res % 2)
	{
		--res;
	}
	return res;
}
signed int __cdecl 
f0700(const int a1, const int unsigned a2[], const int a3, int *a4[])
{
	//placeholder variable
	int i = 0;
	int invrt1 = -1;
	int val1 = (int)&a2[i];
	int val2 = (int)&a2[i++];
	int result = 0;
	//bitwise encryption
	for (i; a1 > 0 && i < a1; ++i)
	{
	
		if (invrt1 * a2[i++] - a2[i] < a3)
		{
			do
			{
				if (invrt1 * val1 > invrt1 * val2)

					val2 = val1;
					val1 += 4;
				    ++i;

			} while (invrt1 * val2 - (val1 + 4) < a3);
		}
		++val2;
		invrt1 = -invrt1;
		//simplified reassignment
		result = result + 2;
	
	}
	
	//encapsulate/distribute responsibility
	return oddDecr(result);
}
#pragma endregion
#endif