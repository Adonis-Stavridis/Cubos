#include "app.h"

Cubos::App::App()
{
}

Cubos::App::~App()
{
}

const bool Cubos::App::getSaveStatus()
{
  return _saveStatus;
}

const std::string Cubos::App::getFilePath()
{
  return _filePath;
}

void Cubos::App::setSaveStatus(bool status)
{
  _saveStatus = status;
}

void Cubos::App::setFilePath(std::string filePath)
{
  _filePath = filePath;
}
