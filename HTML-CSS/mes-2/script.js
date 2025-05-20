const botao = document.getElementById('botao-tema');

botao.addEventListener('click', () => {
  document.body.classList.toggle('tema-escuro');
  document.querySelector('main').classList.toggle('tema-escuro');
});
