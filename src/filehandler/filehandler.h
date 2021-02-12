#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <exception>

#include <iostream>

namespace Cubos
{

  class FileHandler
  {
  private:
    std::fstream _fileStream;
    std::string _filePath;

  public:
    FileHandler(std::string filePath);
    ~FileHandler();

  public:
    const std::string getFilePath();

  public:
    const void open();
    const void save();
  };

  namespace Exceptions
  {
    struct CouldNotOpenFileException : public std::exception
    {
      const char *what() const throw()
      {
        return "Could not open file";
      }
    };
  } // namespace Exceptions

} // namespace Cubos

#endif // FILEHANDLER_H
