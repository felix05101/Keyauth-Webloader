#include <Windows.h>
#include "auth.hpp"
#include <string>
#include "utils.hpp"
#include "skStr.h"
#include <thread>
const std::string compilation_date = (std::string)skCrypt(__DATE__);
const std::string compilation_time = (std::string)skCrypt(__TIME__);
using namespace KeyAuth;

std::string name = ""
std::string ownerid = ""
std::string secret = ""
std::string version = ""
std::string url = skCrypt("").decrypt(); 

api KeyAuthApp(name, ownerid, secret, version, url);










//              k;double sin()
//          ,cos();main(){float A=
//        0,B=0,i,j,z[1760];char b[
//      1760];printf("\x1b[2J");for(;;
//   ){memset(b,32,1760);memset(z,0,7040)
//   ;for(j=0;6.28>j;j+=0.07)for(i=0;6.28
//  >i;i+=0.02){float c=sin(i),d=cos(j),e=
//  sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
//  h*e+f*g+5),l=cos      (i),m=cos(B),n=s\
// in(B),t=c*h*g-f*        e;int x=40+30*D*                                                               !! GO FURTHER DOWN FOR IMPORTANT CODE !!
// (l*h*m-t*n),y=            12+15*D*(l*h*n
// +t*m),o=x+80*y,          N=8*((f*e-c*d*g
//  )*m-c*d*e-f*g-l        *d*n);if(22>y&&
//  y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
//  ".,-~:;=!*#$@"[N>0?N:0];}}/*#****!!-*/
//   printf("\x1b[H");for(k=0;1761>k;k++)
//    putchar(k%80?b[k]:10);A+=0.04;B+=
//      0.02;}}/*****####*******!!=;:~
//        ~::==!!!**********!!!==::-
//          .,~~;;;========;;;:~-.
//              ..,--------,*/
































void close() //define what the buttons do like this
{

	KeyAuthApp.button("1");
	exit(0);


}

void discord() //define what the buttons do like this
{

	KeyAuthApp.button("2");
	


}



int main()
{
	std::string consoleTitle = ("");
	HWND consoleWindow = GetConsoleWindow();
	ShowWindow(consoleWindow, SW_HIDE);
	KeyAuthApp.init();



	std::thread run(close); //"include" the defines of the buttons like this
	std::thread run2(discord);

	
	KeyAuthApp.web_login(); //ignore






	//buttons, 1 and 2 are the button values I choose on the KeyAuth dashboard
	KeyAuthApp.button("1"); //close
	KeyAuthApp.button("2"); //discord


	



}

