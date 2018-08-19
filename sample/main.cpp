#include <iostream>
#include <string>
#include <vector>

#include "../core/crawler.h"
#include "../core/dataStructure.h"

int main()
{
    Crawler c = Crawler();
    Folders f1 = c.read_directory(".");
    vector<Folder> folders = f1.get_folders();
    for(int i =0 ; folders.size();i++){
        cout<<folders[i].get_name()<<endl;
    }
}
/************************
 * dataStructure.h:
 *   Folder class is something more than enough and should be removed ASAP.
 *   We should only have a Folders Class including of a vector<string> prop.
 ***********************/