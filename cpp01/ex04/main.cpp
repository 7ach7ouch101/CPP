#include <iostream>
#include <fstream>


int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string line;
        std::string outline;
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];

        if(s1.length() && s2.length() && filename.length())
        {
            std::ifstream infile(filename);
            std::ofstream outfile(filename + ".replace");
            while(std::getline(infile, line))
            {
                for(size_t pos = 0; 1 ; pos = pos + s2.length())
                {
                    pos = line.find(s1, pos);
                    if(pos == std::string::npos)
                        break ;
                    line.erase(pos, s1.length());
                    line.insert(pos, s2);
                }
                outline = outline + line;
            }
            outfile << outline;
            infile.close();
            outfile.close();
        }
    }
    else
        std::cout << "USAGE: filename string1 string2" << std::endl;
    return (0);
}