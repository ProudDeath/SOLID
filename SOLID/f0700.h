#ifndef __f0700_h__
#define __f0700_h__

// *********************************************************************
//
//  Thanks for your interest in this position. In this preliminary 
//  screen process, you are given the following native 32-bit C code:
//
//    1. Refactor/rewrite the code into a SOLID readable code
//       - A READABLE code should allow other programmers to fully 
//         understand what the code is doing, by just glancing over it 
//         (within 3-5 seconds) without having to read through lengthy
//         comments / documentation, thus improving the overall
//         productivity of the team
//       - A READABLE code should be "self-explanatory", short, 
//         consistent, and properly structured that allow seamless 
//         communication across team
//       - Keep in mind, there is no absolutely right/wrong way. But
//         we mostly interested in candidates who can boost the overall
//         productivity of the code review team. Here are few
//         suggestions you may consider:
//         - eliminate unnecessary pointer arithmetics
//         - eliminate unnecessary variables/loop/calculation
//         - keep it super simple, DON'T write code that only hardcore 
//           programmers can understand; DO write high level code that 
//           every programmer can read
//
//    2. What strategy would you use to verify that your code is correct?
//		  unit testing
//    3. Explain what the code is trying to accomplish intuitively
//
//    4. Please show us how you accomplish all #1, #2, #3:
//       - Setup a project with Visual Studio 2015 (or higher) on Win7
//         so that we can verify that your code is working properly
//       - Version control your steps with Git to help our reviewers 
//         to validate/review your code
//       - Zip your Git repo and email it back to us for further review
//
//  Good Luck!
//
// ********************************************************************


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
	// Pre-Condition:
	//    a1: possible input value = [64, 128, 256]
	//    a2: is an int[1408] array
	//        possible input value for each element = [-4095 ... 4095]
	//    a3: possible input value = [2, 3, 4, 5, 6]
	//    a4: is an int[116] array
	//        possible input value for each element = [0]
	//
	// Post-Condition:
	//    a1: value shouldn't change
	//    a2: value shouldn't change
	//    a3: value shouldn't change
	//    a4: value can change


	
	//renamed v6 to i
	int i = 0;
	//renamed v9 to invert one
	int invrt1 = -1;
	//renamed v12 to value one
	int val1 = (int)&a2[i];
	//renamed
	int val2 = (int)&a2[i++];
	int result = 0;

	
	//not needed variables
	//int *v4;
	//int v5;
	//int v7;
	//int v14;
	//int v15;
	//int a2a;
	//int v13;
	//int v11;
	
	//not needed placeholders
	//v5 = a1;
	//v7 = a2[a1];
	//v14 = a2[a1 - 1];
	//v15 = v7;
	//v4 = a2;
	//v6 = 0;
	//result = 0;
	

	//prototype forloop
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
	/*
	// comment out code for removal
if (a1 > 0)
	{
		//unnessesary assignment
		//v10 = a4;
		do
		{
			
			*v10 = (int)&a2[i++];
			v12 = (int)&a2[i];
			if (invrt1 * a2[i++] - a2[i] < a3)
			{
				do
				{
					if (invrt1 * *(int *)v12 > invrt1 * *(int *)*v10) 
					
						*v10 = v12;

						 
						v12 += 4;
						++i;
					
				} while (invrt1 * (*(int *)*v10 - v12 + 4) < a3);
				//a1 is const
				//v5 = a1;
			}
			++v10;
			invrt1 = -invrt1;
			//simplified reassignment
			result = result + 2;
		} while (i < a1);
	}

	//if result is even decrement it by 1
	if (result % 2)
		--result;
	
	//omit unneeded assignments
	v4[v5 - 1] = v14;
	v4[v5] = v15;
	*/
	
	//encapsulate/distribute responsibility
	return oddDecr(result);
}

#endif