#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

struct Song {
    string title;
    string artist;
    bool favorite;
};

class RecentlyPlayed {
private:
    Song songs[5];
    int count;

public:
    RecentlyPlayed() {
        count = 0;
    }

    void addRecent(string title, string artist) {
        int limit = (count < 5) ? count : 4;
        for (int i = limit; i > 0; i--) {
            songs[i] = songs[i-1];
        }
        songs[0].title = title;
        songs[0].artist = artist;
        songs[0].favorite = false;
        if (count < 5) count++;
    }

    
};

