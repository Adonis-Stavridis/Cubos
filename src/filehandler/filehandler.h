#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <iostream>

#include <filehandlerExceptions.h>

namespace Cubos
{

  class FileHandler
  {
  private:
    std::fstream _fileStream;
    const std::string _filePath;

  public:
    FileHandler(const std::string &filePath);
    ~FileHandler();

  public:
    const std::string getFilePath();

  public:
    const void open();
    const void save();
  };

} // namespace Cubos

#endif // FILEHANDLER_H
