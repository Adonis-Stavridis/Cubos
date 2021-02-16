#ifndef APP_H
#define APP_H

#include <string>

namespace Cubos
{
  class App
  {
  private:
    bool _saveStatus = true;
    std::string _filePath = "";

  public:
    App();
    ~App();

  public:
    const bool getSaveStatus();
    const std::string getFilePath();

    void setSaveStatus(bool status);
    void setFilePath(std::string filePath);
  };
} // namespace Cubos

#endif // APP_H
