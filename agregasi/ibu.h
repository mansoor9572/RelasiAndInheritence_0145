#ifndef IBU_H
#define IBU_H

class ibu 
{
public :
    string nama ;
    vector <anak *> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout<<"Ibu \"" <<nama<< "\" ada \n";
    }

    ~ibu()
    {
         cout<<"ibu  \" " <<nama<< "\"  tida ada \n";
    }
    void tambahAnak (anak *);
    void cetakAnak();

};


