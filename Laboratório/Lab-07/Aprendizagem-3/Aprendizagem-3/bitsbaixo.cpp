int bitsBaixos(unsigned int a)
{
	unsigned int mascara = a & ((1 << 16) - 1);
	return mascara;
}