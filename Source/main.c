# ============================================================
# .gitignore for EnviroTime — ARM7 LPC2148 Keil µVision Project
# ============================================================
# This file tells Git to IGNORE generated build artifacts.
# Only source code and documentation should be tracked.
# ============================================================

# ----- Keil µVision Build Output Folder -----
Objects/
Listings/

# ----- Keil Generated Binary Files -----
*.axf
*.lnp
*.map
*.htm
*.build_log.htm
*.dep

# ----- Compiled Object Files -----
*.o
*.crf
*.d
*.lst

# ----- Keil µVision User/IDE Settings (machine-specific) -----
*.uvgui.*
*.uvgui_*.bak
*.uvopt.bak
*.uvproj.bak
*.uvoptx
*.uvguix.*

# ----- Backup Files -----
*.bak
*~
*.orig

# ----- Windows System Files -----
Thumbs.db
Desktop.ini
ehthumbs.db

# ----- macOS Files -----
.DS_Store
.AppleDouble
.LSOverride

# ----- Linux Files -----
*~

# ----- Editor Temp Files -----
*.swp
*.swo
.vscode/
.idea/

# ============================================================
# FILES THAT ARE TRACKED (NOT ignored):
#   src/*.c         ← All C source files
#   src/*.h         ← All header files
#   src/Startup.s   ← ARM startup assembly
#   keil/*.uvproj   ← Keil project file (build config)
#   build/*.hex     ← Pre-compiled HEX for direct flashing
#   docs/           ← All documentation
#   README.md
#   LICENSE
#   CONTRIBUTING.md
#   .gitignore      ← This file
