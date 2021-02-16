#include "filehandler.h"

Cubos::FileHandler::FileHandler(const std::string &filePath) : _fileStream(filePath), _filePath(filePath)
{
}

Cubos::FileHandler::~FileHandler()
{
}

const std::string Cubos::FileHandler::getFilePath()
{
  return _filePath;
}

const void Cubos::FileHandler::open()
{
  std::string line;

  if (!_fileStream.is_open())
  {
    throw Cubos::Exceptions::CouldNotOpenFileException();
  }

  while (getline(_fileStream, line))
  {
    std::cout << line << std::endl;
  }

  _fileStream.close();
}

const void Cubos::FileHandler::save()
{
  if (!_fileStream.is_open())
  {
    _fileStream.open(_filePath, std::ios_base::out);
  }

  _fileStream << "This is a saved Cubos scene" << std::endl;

  _fileStream.close();
}
