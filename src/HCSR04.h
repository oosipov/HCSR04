#include <Arduino.h>
class HCSR04
{
	public:
	HCSR04(int out,int echo);				
	HCSR04(int out,int echo[],int n);
	~HCSR04();						
	float dist()      const;		
	float dist(int n)      const;	

	private:
	void init(int out,int echo[],int n);
	int out;							
	int *echo;							
	int n;								
};
