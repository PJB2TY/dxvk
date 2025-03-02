SDL_PROC(const char*, SDL_GetError, (void))
SDL_PROC(SDL_DisplayID*, SDL_GetDisplays, (int*))
SDL_PROC(bool, SDL_GetDisplayBounds, (SDL_DisplayID, SDL_Rect*))
SDL_PROC(bool, SDL_GetDisplayUsableBounds, (SDL_DisplayID, SDL_Rect*))
SDL_PROC(SDL_DisplayMode*, SDL_GetCurrentDisplayMode, (SDL_DisplayID))
SDL_PROC(SDL_DisplayMode*, SDL_GetDesktopDisplayMode, (SDL_DisplayID))
SDL_PROC(SDL_DisplayMode**, SDL_GetFullscreenDisplayModes, (SDL_DisplayID, int*))
SDL_PROC(bool, SDL_GetClosestFullscreenDisplayMode, (SDL_DisplayID, int, int, float, bool, SDL_DisplayMode*))
SDL_PROC(SDL_DisplayID, SDL_GetDisplayForWindow, (SDL_Window*))
SDL_PROC(SDL_WindowFlags, SDL_GetWindowFlags, (SDL_Window *))
SDL_PROC(bool, SDL_GetWindowSize, (SDL_Window*, int*, int*))
SDL_PROC(bool, SDL_SetWindowSize, (SDL_Window*, int, int))
SDL_PROC(bool, SDL_SetWindowPosition, (SDL_Window*, int, int))
SDL_PROC(bool, SDL_SetWindowFullscreen, (SDL_Window*, bool))
SDL_PROC(bool, SDL_SetWindowFullscreenMode, (SDL_Window*, const SDL_DisplayMode*))
SDL_PROC(char const* const*, SDL_Vulkan_GetInstanceExtensions, (Uint32*))
SDL_PROC(bool, SDL_Vulkan_CreateSurface, (SDL_Window*, VkInstance, const VkAllocationCallbacks*, VkSurfaceKHR*))
SDL_PROC(bool, SDL_Vulkan_LoadLibrary, (const char*))
SDL_PROC(void, SDL_free, (void*))
SDL_PROC(bool, SDL_InitSubSystem, (SDL_InitFlags))
SDL_PROC(void, SDL_QuitSubSystem, (SDL_InitFlags))
#undef SDL_PROC
