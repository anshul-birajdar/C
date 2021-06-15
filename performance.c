/*
 *This is the source code of the the program Anshul's Benchmarks
 *
 *  Copyright (C) 2021 Anshul Birajdar <anshul.birajdar.tech AT gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */


#include<stdio.h>
#include<string.h>

#define LEVELS 10
#define DIFFICULTY 30
#define TEST_VAL LEVELS + 1
#define TTIMES 1 << DIFFICULTY

int ret(int x);
int tenx(int x);


int main(int argc,char **argv)
{
	if(argc==1){
		printf("The Difficulty is %d\n---TEST BEGINS---\n",DIFFICULTY);
		for(int i=1;i<TEST_VAL;i++)
		{
			for(int  j=0;j<TTIMES;j++)
			{
				int testval;
				for(int k=0;k<i;k++)
					testval=i<<j*2>>j/2;
				if(j==0)
				{
					if(testval==TEST_VAL-1)	printf("%9d\n---All Done---\n",testval);
					else			printf("%9d\n",testval);
				}
				
			}
		}
	} 
	else
	{
		char helptext[]="\n\
		Anshul's Benchmarks 1.0 provides benchmarks\n\
		Copyright (C) 2020 Anshul Birajar <anshul.birajdar.tech AT gmail.com>\n\
		\n\
		This program is free software: you can redistribute it and/or modify\n\
		it under the terms of the GNU General Public License as published by\n\
		the Free Software Foundation, either version 3 of the License, or\n\
		(at your option) any later version.\n\
		\n\
		This program is distributed in the hope that it will be useful,\n\
		but WITHOUT ANY WARRANTY; without even the implied warranty of\n\
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n\
		GNU General Public License for more details.\n\
		\n\
   		You should have received a copy of the GNU General Public License\n\
		along with this program.  If not, see <https://www.gnu.org/licenses/>.";
		for (int i = 0; i < argc-1; ++i)
			if(strcmp(argv[1],"-v")==0)	
				printf("%s\n",helptext);
			else if(strcmp(argv[1],"-h")==0)
				printf("$ time %s [-h | -v]\n -h:help\n -v:version\n",argv[0]);
	}
	return 0;
}