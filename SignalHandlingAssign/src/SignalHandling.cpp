#include <SignalHandling.h>

static void signal_handler(int ID)
{
	cout<<"\nInterrupt signal is ID : "<<ID<<endl;
	if(ID == 11)
	{
		cout<<"\n Seg core dump\n"<<endl;
		exit(0);
	}
}

char user[SIZE] = "Welcome User!";
char * buf;
        
void Signal_handler (int sig_num)
{
	cout<<buf<<&user<<endl;
	exit(0);
}

int main()
{
	signal(SIGUSR1, signal_handler);
	cout<<"\n Received SIGUSR1 is : "<<user<<endl;
	{
		char str1[SIZE] = "System";
		// char * buf;

		buf = strcat( str1, " Programming" );
		cout<<"\n Concatenated string is : "<< str1<<endl;
	}
	
	{
		int count=0;
		signal(SIGSEGV, Signal_handler);
		while (++count)
		{
			cout << "\n Hello all! Welcome!" << endl;
			if (count == 3)
				raise(SIGSEGV);
		}
		
		return 0;
	}
}


