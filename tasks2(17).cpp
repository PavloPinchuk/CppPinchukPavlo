#include<iostream>

using namespace std;

int NearestToMax(int mas[], size_t n)
{
	int max = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (max < mas[i])
			max = mas[i];
	}
	cout << "Max: "<< max << endl;
	int min_dif;
	if (max != mas[0])
	{
		min_dif = abs(mas[0] - max);
	}
	else
		min_dif = abs(mas[1] - max);
	
	int nearest_to_max = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (mas[i] != max)
		{
			if (abs(mas[i] - max) <= min_dif)
			{
				min_dif = abs(mas[i] - max);
				nearest_to_max = mas[i];
			}
				
		}
	}
	return nearest_to_max;
}

int NearestToMin(int mas[], size_t n)
{
	int min = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (min > mas[i])
			min = mas[i];
	}
	cout << "Min: " << min << endl;
	int min_dif;
	if (min != mas[0])
	{
		min_dif = abs(mas[0] - min);
	}
	else
		min_dif = abs(mas[1] - min);

	int nearest_to_min = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (mas[i] != min)
		{
			if (abs(mas[i] - min) <= min_dif)
			{
				min_dif = abs(mas[i] - min);
				nearest_to_min = mas[i];
			}

		}
	}
	return nearest_to_min;
}

int NearestToSered(int mas[], size_t n)
{
	double sered = 0;
	for (int i = 0; i < n; i++)
	{
		sered += mas[i];
	}
	sered /= n;
	cout << "Seredne arifmetichne: " << sered << endl;
	int min_dif;
	if (sered != mas[0])
	{
		min_dif = abs(mas[0] - sered);
	}
	else
		min_dif = abs(mas[1] - sered);

	int nearest_to_sered = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (mas[i] != sered)
		{
			if (abs(mas[i] - sered) <= min_dif)
			{
				min_dif = abs(mas[i] - sered);
				nearest_to_sered = mas[i];
			}

		}
	}
	return nearest_to_sered;
}

int main()
{
	const size_t n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}
	
	cout << "Nearest to seredne arifmetichne: " << NearestToSered(mas, n) << endl;
	cout << "Nearest to max: " << NearestToMax(mas,n) << endl;
	cout << "Nearest to min: " << NearestToMin(mas, n) << endl;
	system("pause");
}
