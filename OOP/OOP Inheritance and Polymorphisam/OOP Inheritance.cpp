// OOP Inheritance and Polymorphism :   Learning inheritance in object oriented programming.
// Author :                             Anthony Guay
// Date :                               4/30/2021
// Update :                             5/3/2021     
// Credit :                             CodeBeaty youtube tutorial @ 8:10
//                      https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty

#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
public:
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo()
    {
        cout << "Youtube Channel name : " << Name << endl << "Owner name : " <<
            OwnerName << endl << "Subscribers : " << SubscribersCount << endl <<
            "Published videos : " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << "       " << videoTitle << endl;
        }

    }

    void Subscribe()
    {
        SubscribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscribersCount > 0)
        {
            SubscribersCount--;
        }

    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

    void CheckAnalytics()
    {
        if (ContentQuality < 5)
            cout << Name << " has a bad quality content." << endl;
        else 
            cout << Name << " has great content." << endl;
    }
};

class CookingYoutubeChannel :public YoutubeChannel
    /*  This way, the application know that a CookingYoutubeChannel is a Youtube Channel.
        CookingYoutubeChannel will then have everything that a youtube channel have.
    */
{
public:
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name ,ownerName)
        // As you can see here, you need to call the constructor of the Youtube 
        // chanel so it can know what constructor to use.
    {
        
    }
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spicies..." <<
            endl;
        ContentQuality++;
        // Here to let OwnerName being accesible (was in the private YoutubeChannel)
        // you need to add the attributes in protected area instead of private.
    }
};

class SingingYoutubeChannel :public YoutubeChannel
{
public:
    SingingYoutubeChannel(string name, string ownerName) :YoutubeChannel(name, ownerName)
    {

    }

    void Practice() 
    {
        cout << OwnerName << " is taking signing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Amy's Kitch", "Amy");
    SingingYoutubeChannel singersYtChannel("JohnSings", "John");

    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YoutubeChannel* yt1 = &cookingYtChannel;
    YoutubeChannel* yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
}

