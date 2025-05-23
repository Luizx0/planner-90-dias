// Seleciona o botão de tema
const botao = document.getElementById('botao-tema');

// Função para alternar o tema
botao.addEventListener('click', () => {
  // Alterna a classe 'tema-escuro' no body e no main
  document.body.classList.toggle('tema-escuro');
  document.querySelector('main').classList.toggle('tema-escuro');

  // Verifica se o tema escuro está ativo e armazena a escolha no localStorage
  const isDarkTheme = document.body.classList.contains('tema-escuro');
  localStorage.setItem('theme', isDarkTheme ? 'dark' : 'light');
});

// Função para aplicar o tema salvo ao carregar a página
window.onload = function() {
  // Recupera o tema armazenado no localStorage
  const savedTheme = localStorage.getItem('theme');
  
  // Se o tema salvo for 'dark', aplica a classe 'tema-escuro' ao body e ao main
  if (savedTheme === 'dark') {
    document.body.classList.add('tema-escuro');
    document.querySelector('main').classList.add('tema-escuro');
  }
};
