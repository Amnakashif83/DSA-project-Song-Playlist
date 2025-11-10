// DSA Project - Song Playlist 

//Amna Kashif
// 62360
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>                     
#include <ctime>
#include <limits>
class Song{
	string artist;
	string title;
	Song*pre;
	Song*next;
	
	Song(const string& t,const string& a){
		artist=a;
		title=t;
		next=nullptr;
		prev=nullptr;
	}
};

