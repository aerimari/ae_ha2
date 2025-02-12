elif choice == '4':
    if created_files:
        filename = input("Enter the name of the file to delete: ")
        filename = filename.title()
        with open(filename, "w") as file:
            created_files.remove(filename)
            print(f"File '{filename}' has been deleted!")
            pass
    else:
        print("The file does not exist. Please create it first")
