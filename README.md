# WinUnx

**A Linux-like terminal experience for Windows**

WinUnx brings familiar Unix/Linux commands to Windows, providing a more unified command-line experience across operating systems.

## 🎯 Project Goals

- Implement popular Unix/Linux commands natively on Windows
- Provide a consistent terminal experience for developers working across platforms
- Lightweight alternative to WSL for basic Unix command functionality

## 🚀 Current Status

**⚠️ Work in Progress**

This project is in active development. Currently working on:
- Argument parsing system
- Core command implementations
- Cross-platform compatibility

## 📋 Planned Features

### Basic Commands
- `ls` - List directory contents
- `cat` - Display file contents
- `grep` - Search text patterns
- `cd` - Change directory
- `pwd` - Print working directory
- `cp` - Copy files
- `mv` - Move/rename files
- `rm` - Remove files
- `mkdir` - Create directories
- `rmdir` - Remove directories
- and more are planned

### Advanced Features
- Command piping support
- Wildcard pattern matching
- Command history
- Tab completion
- Customizable aliases

## 🛠️ Installation

### Prerequisites
- Windows 10/11
- C++ compiler (Visual Studio, MinGW, or similar)

### Build Instructions

```bash
# Clone the repository
git clone https://github.com/Kukur091/WinUnx.git
cd WinUnx

# Compile (adjust compiler as needed)
(i will add the good command to use later)

# Or use Visual Studio
# Open WinUnx.cpp in Visual Studio and build
```

## 📖 Usage

```bash
compile command (i will add it later when the core will be finished)
```

## 🤝 Contributing

Contributions are welcome! This project is perfect for:
- Beginners learning C++ and system programming
- Developers interested in cross-platform command-line tools

### How to Contribute
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-command`)
3. Implement your changes
4. Add tests if applicable
5. Submit a pull request

### Command Implementation Guidelines
- Follow Unix command behavior and syntax
- Handle Windows path separators appropriately
- Provide helpful error messages
- Include basic documentation

## 🏗️ Architecture

The project aims to:
- Parse command-line arguments efficiently
- Map Unix commands to Windows-compatible implementations
- Handle file system differences between Unix and Windows
- Provide consistent output formatting

## 📝 Roadmap

- [x] **Phase 1**: Core argument parsing system
- [ ] **Phase 2**: Basic file system commands (`ls`, `cat`, `cd`)
- [ ] **Phase 3**: File manipulation commands (`cp`, `mv`, `rm`)
- [ ] **Phase 4**: Text processing commands (`grep`, `sort`, `head`, `tail`)
- [ ] **Phase 5**: Advanced features (piping, redirection)
- [ ] **Phase 6**: Interactive shell mode

## 🐛 Known Issues

- Argument parsing system in development
- Limited command set currently available (only one for the moment, and it isn't even finished **for now**)
- feel free to suggest your ideas, just open an issue to suggest one.

## 📄 License

This project is open source, with MIT Licence. Please check the LICENSE file for details.

## 🙏 Acknowledgments

Inspired by the need for better cross-platform development tools and the Unix philosophy of simple, composable commands.

## 📞 Contact

For questions, suggestions, or contributions, please open an issue on GitHub.

---

**Note**: This is an educational and utility project aimed at bridging the gap between Unix and Windows command-line environments.
