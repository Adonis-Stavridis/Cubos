#include "filehandler.h"

Cubos::FileHandler::FileHandler(const std::string &filePath) : _fileStream(filePath), _filePath(filePath)
{
}

Cubos::FileHandler::~FileHandler()
{
}

const std::string Cubos::FileHandler::getFilePath()
{
  return this->_filePath;
}

const void Cubos::FileHandler::open()
{
  std::string line;

  if (!this->_fileStream.is_open())
  {
    throw Cubos::Exceptions::CouldNotOpenFileException();
  }

  while (getline(this->_fileStream, line))
  {
    std::cout << line << std::endl;
  }

  this->_fileStream.close();
}

const void Cubos::FileHandler::save()
{
  if (!this->_fileStream.is_open())
  {
    this->_fileStream.open(this->_filePath, std::ios_base::out);
  }

  this->_fileStream << "This is a saved Cubos scene" << std::endl;

  this->_fileStream.close();
}
