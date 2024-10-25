# Lister

*Lister is currently only supported on Windows.*
Lister is a Windows Forms application that allows users to create a list of items. Users can add new items, reset the list, and save it to a file. [WEBSITE](https://tier.game-cave.net/lister/Lister.html)

## Features

- **Add Text to List:** Users can add items to the list writing to the input box and clicking the "Add" button.
- **Save List:** The list can be saved to a file called `New List.txt`.
- **Reset List:** Users can reset the list, removing all data and items.
- **Language Support:** The application supports multiple languages, including English, Japanese, Chinese (Simplified and Traditional), German, French, and Spanish.
- **Disallow Empty Text:** Users can check the "Disallow empty text" option to prevent adding blank entries.
- **Saving Language:** The application saves the current language, restoring them when the application is restarted.

## Usage

1. Open the application.
3. Insert text into the input box and click "Add" to add an item to the list.
4. Click "Save List" to save the list to a file named `New List.txt`.
5. Click "Reset List" to clear all items and data from the list.
6. Check the "Disallow empty text" box if you want to prevent adding blank entries.

## Files

- **`[New List.txt](./main/New List.txt)`:** The saved list file.
- **`Language.txt`:** The file that stores the selected language.
- **`Lister.exe`:** The executable for the application.
- **`Form.cpp`:** Launches a Windows Forms app with a main window.
- **`Form.h`:** The main file for the looks of the window.
- **`Resource.rc`:** The file for defining the icon.
- **`resource.h`:** Defines unique identifiers for resources.
- **`Lister.ico`:** Icon for the Lister application.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
