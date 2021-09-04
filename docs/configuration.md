# CONFIGURATION

## IDE / Code editor
### VSCode
- Look for the `node_api.h` file.
```bash
find / -name node_api.h
```
File was found here: `/usr/local/include/node/node_api.h`
- Add to include path for C/C++ extension
```json
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/local/include/node/"
            ],
            "defines": [],
            "macFrameworkPath": [],
            "compilerPath": "/usr/local/bin/gcc-10",
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "macos-gcc-x64"
        }
    ],
    "version": 4
}
```