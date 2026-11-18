#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>

// the main purpose of this exercise is learning functional decomposition 

// this function returns the index of the element s in the vector if found and -1 if not found
int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(s == vin[i]){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout = vin1;

    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vin1) == -1){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vin1) != -1){
            vout.push_back(vin2[i]);
        }
    }
}


/*
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i =0; i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    bool notoverlap=true;
    for(int i =0; i<vin2.size();i++){
        for(int j=0;j<vin1.size() && notoverlap;j++){
            if (vin2[i] == vin1[j]){
                notoverlap = false;
            }
        }
        if(notoverlap){
            vout.push_back(vin2[i]);
        }
        
    }


}



void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool overlap=false;
    for(int i =0; i<vin2.size();i++){
        for(int j=0;j<vin1.size() && !overlap;j++){
            if (vin2[i] == vin1[j]){
                overlap = true;
            }
        }
        if(overlap){
            vout.push_back(vin2[i]);
        }
        
    }


}
*/

int main(){
    std::vector<std::string>vin1;
    std::vector<std::string>vin2;
    std::ifstream infile;
    infile.open("warehouse1.txt");
    std::string tmp;

    while(infile >> tmp){
        vin1.push_back(tmp);
    }

    infile.close();

    infile.open("warehouse2.txt");

    while(infile >> tmp){
        vin2.push_back(tmp);
    }
    infile.close();

    std::vector<std::string>vunion;
    std::vector<std::string>vintersection;
    union_vector(vin1,vin2,vunion);
    intersection_vector(vin1,vin2,vintersection);
    std::ofstream outfile;
    outfile.open("union.txt");
    for(int i =0; i<vunion.size();i++){
        outfile << vunion[i] <<std::endl;
    }
    outfile.close();
    outfile.open("intersection.txt");
    for(int i =0; i<vintersection.size();i++){
        outfile << vintersection[i] <<std::endl;
    }
    outfile.close();




}