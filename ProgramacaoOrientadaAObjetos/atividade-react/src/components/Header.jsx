import { NavLink } from "react-router-dom";

export function Header({title}) {
    return (
        <header className="p-5 flex justify-between">
            <h1 className="text-4xl font-bold">{title}</h1>
            <nav>
              <ul className="flex gap-5">
                <li>
                  <NavLink to="/">Início</NavLink>
                </li>
                <li>
                  <NavLink to="/product">Produtos</NavLink>
                </li>
                <li>
                  <NavLink to="">Sobre</NavLink>
                </li>
                <li>
                  <NavLink to="">Contato</NavLink>
                </li>
              </ul>
            </nav>
        </header>
    )
}