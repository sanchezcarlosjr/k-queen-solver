<script context="module" lang="ts">
    import Chessboard from '$lib/components/chessboard.svelte'
    async function instantiate (webModuleAssembly: string) {
      const { instance } = await WebAssembly.instantiateStreaming(await fetch(webModuleAssembly), {
        env: {
          print_string: function (str) {
            console.log(str)
          }
        }
      })
      return instance.exports
    }
</script>
<h1>K-Queen Solver</h1>
{#await instantiate('queen_solver.wasm')}
    <p>...waiting</p>
{:then queenSolver}
    <Chessboard />
{:catch error}
    <p style="color: red">{error.message}</p>
{/await}