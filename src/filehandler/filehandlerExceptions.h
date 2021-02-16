#ifndef FILEHANDLEREXCEPTIONS_H
#define FILEHANDLEREXCEPTIONS_H

#include <exception>

namespace Cubos
{

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

#endif // FILEHANDLEREXCEPTIONS_H
