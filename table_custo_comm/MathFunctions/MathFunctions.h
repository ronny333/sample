unsigned int mysqrt(unsigned int value)
{
	unsigned int result = 0;
	for (unsigned int i = 128; i != 0; i >>= 1)
	{
		result += i;
		if (result * result > value)
		{
			result -= i;
		}
	}
	
	return result;
}

