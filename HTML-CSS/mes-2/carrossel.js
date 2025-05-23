let indiceImagem = 0; // Índice da imagem atual
const imagens = document.querySelectorAll('.imagens img'); // Seleciona todas as imagens

function mostrarImagem(indice) {
    // Garante que o índice esteja dentro do intervalo
    if (indice >= imagens.length) {
        indiceImagem = 0;
    } else if (indice < 0) {
        indiceImagem = imagens.length - 1;
    } else {
        indiceImagem = indice;
    }

    // Move as imagens para mostrar a imagem atual
    const deslocamento = -indiceImagem * 600; // 600 é a largura da imagem
    document.querySelector('.imagens').style.transform = `translateX(${deslocamento}px)`;
}

function mudarImagem(direcao) {
    mostrarImagem(indiceImagem + direcao);
}

// Mostra a primeira imagem ao carregar
mostrarImagem(indiceImagem);
