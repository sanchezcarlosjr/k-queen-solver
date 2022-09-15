<div class="chessboard">
    <div class="aim goal" style="--topGoal: {2};--leftGoal: {1};">&#9819;</div>
    {#each Array(63) as _, i}
        <div class="cell" class:white="{i % 2 === 0}"></div>
    {/each}
</div>


<style>
    .aim {
        position: absolute;
        transition: left 0.2s ease, top 0.2s ease;
        transform-origin: center;
        font-size: 40px;
        width: calc(100% / var(--n));
        aspect-ratio: 1;
    }

    .goal {
        top: calc(100% / var(--n) * var(--topGoal));
        left: calc(100% / var(--n) * var(--leftGoal));
    }

    .chessboard {
        display: flex;
        flex-wrap: wrap;
        --n: 8;
        width: 40%;
    }

    .cell {
        background-size: cover;
        width: calc((100% - (var(--n) - 1) * 1px) / var(--n));
        aspect-ratio: 1;
        border: 1px solid grey;
        background: #e59110 center;
    }

    .white {
        background: #ffcfb6 center;
    }
</style>