#pragma once
#ifndef __f0700Legacy_h__
#define __f0700Legacy_h__


signed int __cdecl f0700Legacy(int a1, int *a2, int a3, int *a4)
{
	
	int *v4;
	int v5;
	int v6;
	int v7;
	int o1;
	int v9;
	int *v10;
	int v11;
	int v12;
	int v13;
	int v14;
	int v15;
	int a2a;

	v4 = a2;
	v5 = a1;
	v6 = 0;
	v7 = a2[a1];
	v14 = a2[a1 - 1];
	o1 = 0;
	v9 = -1;
	a2[a1 - 1] = 10000;
	v15 = v7;
	a2[a1] = -10000;
	a2a = 0;

	if (a1 > 0)
	{
		v10 = a4;
		do
		{
			v11 = (int)&v4[v6++];
			*v10 = v11;
			v12 = (int)&v4[v6];
			if (v9 * (*(int *)v11 - *(int *)v12) < a3)
			{
				do
				{
					if (v9 * *(int *)v12 > v9 * *(int *)*v10)
						*v10 = v12;
					v13 = *(int *)(v12 + 4);
					v12 += 4;
					++v6;
				} while (v9 * (*(int *)*v10 - v13) < a3);
				v5 = a1;
			}
			++v10;
			v9 = -v9;
			o1 = a2a++ + 1;
		} while (v6 < v5);
	}
	if (o1 % 2)
		--o1;
	v4[v5 - 1] = v14;
	v4[v5] = v15;
	return o1;
}

#endif