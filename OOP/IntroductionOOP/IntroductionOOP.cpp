// IntroductionOOP :    The title say it all.
// Author :             Anthony Guay
// Date :               4/29/2021
// Credit :             CodeBeauty tutorial @7:30
//                      https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty

#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel 
{

// Some proprieties should be private. You want to encapsulate variable
// in a class. You only want to change values with method inside the class.

/*
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list <string> PublishedVideoTitles;
*/

private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list <string> PublishedVideoTitles;

public:

	// Constructor of object. Don't forget to have a different argument 
	// in the fonctions call.

	YoutubeChannel(string name, string ownerName) 
	{
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	// Class method : You usually use methods to change values of an object.

	void GetInfo()
	{
		cout << "Name : " << Name << endl;
		cout << "OwnerName : " << OwnerName << endl;
		cout << "SubscribersCount : " << SubscribersCount << endl;
		cout << "Videos : " << endl;
		for (string videoTitle : PublishedVideoTitles)
		{
			cout << "      " << videoTitle << endl;
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

	void DeleteVideo(string title)
	{
		PublishedVideoTitles.remove(title);
	}
};

int main()
{
	/* Constructor is better
	
	YoutubeChannel ytChannel;
	ytChannel.Name = "CodeBeaty";
	ytChannel.OwnerName = "Saldina";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVideoTitles = { "C++ for beginners Video 1",
	"HTML & CSS Video 1", "C++ OOP Video 1" };

	*/

	//Constructor :

	YoutubeChannel ytChannel("CodeBeauty", "Saldina");

	/* push_back to add info (class method is better)

	ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
	ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
	ytChannel.PublishedVideoTitles.push_back("C++ OOP Video 1");
	*/

	// Subscribe method
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();

	// Class method called with the object.methodName

	ytChannel.GetInfo();
	
	// Add a video method

	ytChannel.PublishVideo("Belle ptite video chum hehehe");

	cout << endl << endl;
	ytChannel.GetInfo();

	// Delete a video with .remove
	ytChannel.DeleteVideo("Belle ptite video chum hehehe");

	cout << endl << endl;
	ytChannel.GetInfo();

	// Here, subcriber is negative wich is a problem.

	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();

	// Set a minimum of decrementation to 0 in unsubscribe method

	cout << endl << endl;
	ytChannel.GetInfo();

	system("pause>0");
}