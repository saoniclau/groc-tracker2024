int namefrequency(string name, string filename)
{
	ifstream file;
	file.open(filename);
	string line;
	int count = 0;
	while (getline(file, line))
	{
		if (line.find(name) != string::npos)
		{
			count++;
		}
	}
	return count;
}