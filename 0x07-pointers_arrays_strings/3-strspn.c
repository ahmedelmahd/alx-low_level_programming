unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;
	char *q;
	
	for (p = s; *p != '\0'; p++) 
	{
		for (q = accept; *q != '\0'; q++) 
		{
			if (*p == *q) 
			{
				count++;
				break;
			}
		}
		if (*q == '\0') 
		{
			return count;
		}
	}
	return count;
}
