int min(int * tab)
{
	int min = tab[0];
	for(int i=0; i<10; i++)
	{
		if(tab[i]<min)
			min=tab[i];
	}
	return min;
}