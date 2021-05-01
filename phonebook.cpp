#include <cstdlib>
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    cout<<"PHONE DIRECTORY\n";
    int s;
    unordered_map<string,vector<string> > phonebook;
    while(true)
    {
    cout<<"\n1.ADD A PHONE NO \n2.DELETE A NO\n3.SHOW WHOLE \n4.EXIT \n";
    cin>>s;
    switch(s)
    {
        case 1:
        {
            string key, no;
            cout<<"NAME: ";
            cin>>key;
            cout<<"PHONE NO: ";
            cin>>no;
            phonebook[key].push_back(no);
            break;
        }
        case 2:
        {
            string key, no;
            cin>>key;
            if( phonebook.count(key)==0)
            cout<<"contact not in phonebook";
            else 
            {
            cin>>no;
            if(find( phonebook[key].begin(),  phonebook[key].end(), no)!=phonebook[key].end())
            phonebook[key].erase(std::find( phonebook[key].begin(),  phonebook[key].end(), no));
            else 
            cout<<"no not found";
            }
            break;
        }
        case 3:
        {
            for(unordered_map<string,vector<string> >::iterator it=phonebook.begin();it!=phonebook.end();it++)
            {
                cout<<"NAME: "<<it->first<<endl;
                cout<<"PHONE NOS: ";
            
            for(string s:it->second)
            {
                cout<<s<<"; ";
            }
            cout<<endl<<endl;
            }
            break;
            
        }
        case 4:
        exit(0);
    
    }

    }
   
    
}