#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <stdint.h>



struct Books{
	int rs;
	int sai;
};

struct Books point;
#define set(O,I)     \
do{                   \
(O) | =((point*)I->rs);      \
(O) | =((point*)I->rs<<2);    \
}while(0)

int main(int argc, char *argv[])
{
	uint32_t opt, out;
	struct Books *val;
	val = &point;

	while(1) {
		struct option long_options[] = {
			{"rs", required_argument, 0, 'r'},
			{"sai", required_argument, 0, 's'}};
		uint32_t index_options = 0;
		opt = getopt_long(argc,argv, ":s:r:",long_options, &index_options);
		if(opt == -1)
			break;
		
		switch(opt)
		{ 
				case 'r':
					val->rs = (atoi(optarg));	
				    break;
			    case 's':
					val->sai = (atoi(optarg));	
				    break;
		}
	}
set(out,val);
printf("%d\n",out);
   return 0;
}
