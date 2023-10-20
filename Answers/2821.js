/**
 * @param {Array<Function>} functions
 * @param {number} ms
 * @return {Array<Function>}
 */
var delayAll = function(functions, ms) {
    return functions.map((f) => () => new Promise((r) => setTimeout(() => r(f()), ms)))
};

