import { useState } from 'react'
import { Header } from './components/Header'
import { Outlet } from 'react-router-dom'

function App() {
  return (
    <div>
      <Header title={"Ecommerce"}/>
      <Outlet/>
    </div>
  )
}

export default App
