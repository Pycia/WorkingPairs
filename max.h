int max(int * tab)
{
	int max = tab[0];
	for(int i=0; i<10; i++)
	{
		if(tab[i]>max)
			max=tab[i];
	}
	return max;
}