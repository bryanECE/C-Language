int main()
{
	while(stopgame == false && Level == 1)//level 1
	{
		system("cls");
		for(int y = 0; y < 10; y++)
		{
			cout<<Map1[y]<<endl;
		}
		for(int y = 0; y<100; y++)
		{
			for (int x = 0; x<100; x++)
			{                
				
				switch(Map1[y][x])
				{
					case '0':
						{
							
	
							
							
							if (GetAsyncKeyState(VK_RIGHT) != 0)
							{
								int x2 =(x+1);
								
								switch (Map1[y][x2])
								{
									case ' ':
										{
											Map1[y][x] = ' ';
											x += 1;
											Map1[y][x2] = '0';
										}break;
										case '!':
											{
												Level = 2;
											}break;
								}
							}
							
							
							if (GetAsyncKeyState(VK_LEFT) != 0)
							{
								int x2 =(x-1);
								
								switch (Map1[y][x2])
								{
									case ' ':
										{
											Map1[y][x] = ' ';
											x -= 1;
											Map1[y][x2] = '0';
										}break;
										case '!':
											{
												Level = 2;
											}break;
								}
							}
							
							
							if (GetAsyncKeyState(VK_DOWN) != 0)
							{
								int y2 =(y+1);
								
								switch (Map1[y2][x])
								{
									case ' ':
										{
											Map1[y][x] = ' ';
											y += 1;
											Map1[y2][x] = '0';
										}break;
										case '!':
											{
												Level = 2;
											}break;
								}
							}
							
							
							if (GetAsyncKeyState(VK_UP) != 0)
							{
								int y2=(y-1);
								
								switch (Map1[y2][x])
								{
									case ' ':
										{
											Map1[y][x] = ' ';
											y -=1;
											Map1[y2][x] = '0';
										}break;
										case '!':
											{
												Level = 2;
											}break;
								}
							}
							
							
						
						}break;
				}
			}
		}
		Sleep(Gamespeed);
	}
