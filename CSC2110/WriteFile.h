#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"
using CSC2110::String;

#include <fstream>
using namespace std;

class WriteFile
{
   private:
      ofstream* output_file;
      bool closed;

   public:
      WriteFile(const char* file_name);
      ~WriteFile();
      void writeLine(std::String* line);
      void close();
};

#endif
