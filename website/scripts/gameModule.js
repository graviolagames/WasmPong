(async () => {
    const response = await fetch('wasm/pong.wasm');
    //const module = await WebAssembly.instantiateStreaming(response);
    // Use the module here
  })();